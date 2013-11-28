//
//  MBJRequest.h
//  BeanJarManager
//

#import <Foundation/Foundation.h>
#import "MBJApp.h"
#import "MBJWinner.h"
#import "MBJSponsor.h"
#import "MBJBean.h"
#import "MBJCategory.h"
#import "MBJAward.h"
#import "MBJSponsorLocation.h"

// Errors
extern NSInteger const kMBJErrorNone;                           // No error - success
extern NSInteger const kMBJErrorInternalServer;                 // Internal server error - no information available
extern NSInteger const kMBJErrorConnectionFailed;               // The connection to the MBJ servers failed
extern NSInteger const kMBJErrorRequestFailed;                  // The request failed
extern NSInteger const kMBJErrorInvalidUsernameOrPassword;      // invalid username or password on authenticate request
extern NSInteger const kMBJErrorInvalidUsername;                // invalid username on validate request
extern NSInteger const kMBJErrorInvalidWinnersRequest;          // invalid winners request
extern NSInteger const kMBJErrorInvalidAwardRequest;            // invalid award request
extern NSInteger const kMBJErrorDeletingBean;                   // delete bean request failed - could be invalid username, password, beanKey
extern NSInteger const kMBJErrorRedeemingBean;                  // redeem bean request failed - could be invalid username, password, beanKey
extern NSInteger const kMBJErrorInvalidSponsorLocationsRequest; // sponsor locations request failed - could be invalid username, password, sponsorKey
extern NSInteger const kMBJErrorInvalidRegisterRequest;         // register request failed - could be invalid username, password, categories, email, zipcode

@interface MBJRequest : NSObject

/**
 *  Register a new MyBeanJar user.
 *
 *  @param username   A valid MyBeanJar username
 *  @param password   A valid MyBeanJar password (minimum of 8 characters, no special symbols)
 *  @param email      A valid email
 *  @param zipCode    A valid US zipcode
 *  @param categories An array of at least three MBJCategory objects.
 *  @param block      The block to execute. The block should have the following argument signature:(BOOL succeeded, NSError *error).  If succeeded == NO check error.code and error.localizedDescription
 */
- (void)registerUserInBackgroundWithUsername:(NSString *)username password:(NSString *)password email:(NSString *)email zipCode:(NSString *)zipCode categories:(NSArray *)categories block:(void(^)(BOOL succeeded, NSError *error))block;

/**
 *  Authenticate a MyBeanJar user.
 *
 *  @param username   A valid MyBeanJar username
 *  @param password   A valid MyBeanJar password (minimum of 8 characters, no special symbols)
 *  @param block      The block to execute. The block should have the following argument signature:(BOOL succeeded, NSError *error).  If succeeded == NO check error.code and error.localizedDescription
 */
- (void)authenticateUserInBackgroundWithUsername:(NSString *)username password:(NSString *)password block:(void(^)(BOOL succeeded, NSError *error))block;

/**
 *  Validate a BeanJar user.
 *
 *  @param username   A valid MyBeanJar username
 *  @param block      The block to execute. The block should have the following argument signature:(BOOL succeeded, NSError *error).  If succeeded == NO check error.code and error.localizedDescription
 */
- (void)validateUserInBackgroundWithUsername:(NSString *)username block:(void(^)(BOOL succeeded, NSError *error))block;

/**
 *  Request that a MyBeanJar user have their password sent to them.
 *
 *  @param username   A valid MyBeanJar username
 *  @param block      The block to execute. The block should have the following argument signature:(BOOL succeeded, NSError *error).  If succeeded == NO check error.code and error.localizedDescription
 */
- (void)sendPasswordInBackgroundWithUsername:(NSString *)username block:(void(^)(BOOL succeeded, NSError *error))block;

/**
 *  Request an NSArray of MBJApp objects. An MBJApp is an iOS applications that supports the MyBeanJar service.
 *
 *  @param username   A valid MyBeanJar username
 *  @param password   A valid MyBeanJar password (minimum of 8 characters, no special symbols)
 *  @param limit      The number of apps to return
 *  @param block      The block to execute. The block should have the following argument signature:(NSArray *apps, NSError *error).  If apps == nil check error.code and error.localizedDescription
 */
- (void)appsInBackgroundWithUsername:(NSString *)username password:(NSString *)password limit:(int)limit block:(void(^)(NSArray *apps, NSError *error))block;

/**
 *  Request an NSArray of MBJWinner objects. An MBJWinner is one of the latest winners within an applications that support the MyBeanJar service.
 *
 *  @param username   A valid MyBeanJar username
 *  @param password   A valid MyBeanJar password (minimum of 8 characters, no special symbols)
 *  @param limit      The number of winners to return
 *  @param block      The block to execute. The block should have the following argument signature:(NSArray *winners, NSError *error).  If winners == nil check error.code and error.localizedDescription
 */
- (void)winnersInBackgroundWithLimit:(int)limit block:(void(^)(NSArray *winners, NSError *error))block;

/**
 *  Request an NSArray of MBJSponsor objects. An MBJSponsor is one of the sponsors within the MyBeanJar service.
 *
 *  @param username   A valid MyBeanJar username
 *  @param password   A valid MyBeanJar password (minimum of 8 characters, no special symbols)
 *  @param limit      The number of winners to return
 *  @param block      The block to execute. The block should have the following argument signature:(NSArray *sponsors, NSError *error).  If sponsors == nil check error.code and error.localizedDescription
 */
- (void)sponsorsInBackgroundWithUsername:(NSString *)username password:(NSString *)password limit:(int)limit block:(void(^)(NSArray *sponsors, NSError *error))block;

/**
 *  Request an NSArray of MBJBean objects for a user. An MBJBean is an award coupon within the MyBeanJar service.
 *
 *  @param username   A valid MyBeanJar username
 *  @param password   A valid MyBeanJar password (minimum of 8 characters, no special symbols)
 *  @param limit      The number of winners to return
 *  @param block      The block to execute. The block should have the following argument signature:(NSArray *beans, NSError *error).  If beans == nil check error.code and error.localizedDescription
 */
- (void)beansInBackgroundWithUsername:(NSString *)username password:(NSString *)password limit:(int)limit block:(void(^)(NSArray *beans, NSError *error))block;

/**
 *  Request an NSArray of MBJCategory objects. An MBJCategory is a type of bean to be awarded within the MyBeanJar service.
 *
 *  @param username   A valid MyBeanJar username
 *  @param password   A valid MyBeanJar password (minimum of 8 characters, no special symbols)
 *  @param limit      The number of winners to return
 *  @param block      The block to execute. The block should have the following argument signature:(NSArray *categories, NSError *error).  If categories == nil check error.code and error.localizedDescription
 */
- (void)categoriesInBackgroundWithUsername:(NSString *)username password:(NSString *)password block:(void(^)(NSArray *categories, NSError *error))block;

/**
 *  Request an MBJAward for a user.
 *
 *  @param username   A valid MyBeanJar username
 *  @param appKey     A valide MBJApp key. This key is unique to your App
 *  @param block      The block to execute. The block should have the following argument signature:(MBJAward *award, NSError *error).  If award == nil check error.code and error.localizedDescription
 */
- (void)awardInBackgroundWithUsername:(NSString *)username appKey:(NSString *)appKey block:(void(^)(MBJAward *award, NSError *error))block;

/**
 *  Request an NSArray of MBJSponsorLocations objects for a sponsor.
 *
 *  @param username   A valid MyBeanJar username
 *  @param password   A valid MyBeanJar password (minimum of 8 characters, no special symbols)
 *  @param sponsorKey A valid MBJSponsor key
 *  @param block      The block to execute. The block should have the following argument signature:(NSArray *locations, NSError *error).  If locations == nil check error.code and error.localizedDescription
 */
- (void)sponsorLocationsInBackgroundWithUsername:(NSString *)username password:(NSString *)password sponsorKey:(NSString *)sponsorKey block:(void(^)(NSArray *locations, NSError *error))block;

/**
 *  Delete a bean.
 *
 *  @param username   A valid MyBeanJar username
 *  @param password   A valid MyBeanJar password (minimum of 8 characters, no special symbols)
 *  @param beanKey    A valid MBJBean key to delete
 *  @param block      The block to execute. The block should have the following argument signature:(BOOL succeeded, NSError *error).  If succeeded == NO check error.code and error.localizedDescription
 */
- (void)deleteBeanInBackgroundWithUsername:(NSString *)username password:(NSString *)password beanKey:(NSString *)beanKey block:(void(^)(BOOL succeeded, NSError *error))block;

/**
 *  Redeem a bean.
 *
 *  @param username   A valid MyBeanJar username
 *  @param password   A valid MyBeanJar password (minimum of 8 characters, no special symbols)
 *  @param beanKey    A valid MBJBean key to redeem
 *  @param block      The block to execute. The block should have the following argument signature:(BOOL succeeded, NSError *error).  If succeeded == NO check error.code and error.localizedDescription
 */
- (void)redeemBeanInBackgroundWithUsername:(NSString *)username password:(NSString *)password beanKey:(NSString *)beanKey block:(void(^)(BOOL succeeded, NSError *error))block;

@end
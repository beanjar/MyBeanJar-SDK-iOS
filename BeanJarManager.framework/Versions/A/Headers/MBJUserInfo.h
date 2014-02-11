//
//  MBJUserInfo.h
//  BeanJarManager
//
//  Created by Ryan Fister on 1/31/14.
//
//

#import <Foundation/Foundation.h>

@interface MBJUserInfo : NSObject

- (id)initWithResponseDictionary:(NSDictionary *)dictionary;

@property (nonatomic, strong) NSString *userKey;
@property (nonatomic, strong) NSString *roleKey;
@property (nonatomic, strong) NSString *username;
@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *lastName;
@property (nonatomic, strong) NSString *zipCode;
@property (nonatomic, strong) NSString *gender;
@property (nonatomic, strong) NSString *email;
@property (nonatomic, strong) NSString *phone;
@property (nonatomic, strong) NSString *dob;
@property (nonatomic, strong) NSArray *categories;





@end

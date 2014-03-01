//
//  MBJBean.h
//

#import <Foundation/Foundation.h>

@interface  MBJBean : NSObject

@property (nonatomic, strong) NSString *beanId;
@property (nonatomic, strong) NSString *beanSponsorKey;
@property (nonatomic, strong) NSString *beanSponsorName;
@property (nonatomic, strong) NSString *beanSponsorLogoUrl;
@property (nonatomic, strong) NSString *beanSponsorUrl;
@property (nonatomic, strong) NSString *beanShortDescription;
@property (nonatomic, strong) NSString *beanLongDescription;
@property (nonatomic, strong) NSDate *beanExpirationDate;
@property (nonatomic, strong) NSDate *beanWonDate;
@property (nonatomic, strong) NSString *beanGame;
@property (nonatomic, strong) NSString *beanRedeemCodeUrl;
@property (nonatomic, strong) NSString *beanGeocodeKey;
@property (nonatomic, assign) BOOL beanRedemptionValidation;
@property (nonatomic, strong) NSString *beanRedemptionUrl;

- (id)initWithResponseDictionary:(NSDictionary *)dictionary;

@end

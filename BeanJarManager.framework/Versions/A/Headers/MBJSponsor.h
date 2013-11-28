//
//  MBJSponsor.h
//

#import <Foundation/Foundation.h>

@interface  MBJSponsor : NSObject

@property (nonatomic, strong) NSString *sponsorId;
@property (nonatomic, strong) NSString *sponsorKey;
@property (nonatomic, strong) NSString *sponsorName;
@property (nonatomic, strong) NSString *sponsorSiteUrl;
@property (nonatomic, strong) NSString *sponsorLogoUrl;
@property (nonatomic, strong) NSString *sponsorCategory;
@property (nonatomic, strong) NSString *sponsorDescription;
@property (nonatomic, strong) NSString *sponsorOffer;
@property (nonatomic, strong) NSString *sponsorGeocodeKey;

- (id)initWithResponseDictionary:(NSDictionary *)dictionary;

@end

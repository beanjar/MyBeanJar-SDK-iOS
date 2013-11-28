//
//  MBJSponsorLocation.h
//

#import <Foundation/Foundation.h>

@interface  MBJSponsorLocation : NSObject

@property (nonatomic, strong) NSString *sponsorId;
@property (nonatomic, strong) NSString *sponsorName;
@property (nonatomic, strong) NSString *sponsorAddress;
@property (nonatomic, strong) NSString *sponsorCity;
@property (nonatomic, strong) NSString *sponsorState;
@property (nonatomic, strong) NSString *sponsorZip;
@property (nonatomic, strong) NSString *sponsorCountry;
@property (nonatomic, assign) float sponsorLat;
@property (nonatomic, assign) float sponsorLon;

- (id)initWithResponseDictionary:(NSDictionary *)dictionary;

@end

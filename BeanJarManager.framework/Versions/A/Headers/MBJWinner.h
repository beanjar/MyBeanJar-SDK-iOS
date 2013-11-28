//
//  MBJWinner.h
//

#import <Foundation/Foundation.h>

@interface  MBJWinner : NSObject

@property (nonatomic, strong) NSString *winnerUsername;
@property (nonatomic, strong) NSString *winnerAppId;
@property (nonatomic, strong) NSString *winnerAppName;
@property (nonatomic, strong) NSString *winnerSponsorLogoUrl;

- (id)initWithResponseDictionary:(NSDictionary *)dictionary;

@end

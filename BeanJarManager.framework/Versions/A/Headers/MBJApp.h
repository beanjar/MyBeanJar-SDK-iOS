//
//  MBJApp.h
//

#import <Foundation/Foundation.h>

@interface MBJApp : NSObject

@property (nonatomic, strong) NSString *appKey;
@property (nonatomic, strong) NSString *appStoreUrl;
@property (nonatomic, strong) NSString *appDescription;
@property (nonatomic, strong) NSString *appIconUrl;
@property (nonatomic, strong) NSString *appName;
@property (nonatomic, strong) NSString *appPublisher;
@property (nonatomic, strong) NSString *appPublisherKey;
@property (nonatomic, strong) NSString *appPublisherUrl;

- (id)initWithResponseDictionary:(NSDictionary *)dictionary;

@end

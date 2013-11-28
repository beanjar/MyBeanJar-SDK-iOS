//
//  MBJAward.h
//

#import <Foundation/Foundation.h>

@interface  MBJAward : NSObject

@property (nonatomic, strong) NSString *awardBeanId;
@property (nonatomic, assign) BOOL awarded;
@property (nonatomic, strong) NSString *awardImageUrl;

- (id)initWithResponseDictionary:(NSDictionary *)dictionary;

@end

//
//  MBJCategory.h
//

#import <Foundation/Foundation.h>

@interface  MBJCategory : NSObject

@property (nonatomic, strong) NSString *categoryKey;
@property (nonatomic, strong) NSString *categoryName;

- (id)initWithResponseDictionary:(NSDictionary *)dictionary;

@end

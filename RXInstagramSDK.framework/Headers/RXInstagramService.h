//
//  RXInstagramService.h
//  RXInstagramSDK
//
//  Created by 陈汉 on 2024/4/9.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface RXInstagramService : NSObject

/**
 * 获取SDK实例（单例）
 */
+ (instancetype)sharedSDK;

/**
 * 登录
 */
- (void)login;

@end

NS_ASSUME_NONNULL_END

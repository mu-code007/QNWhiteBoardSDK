//
//  QNWhiteBoardWidgetActionEvent.h
//  QNWhiteBoardSDK
//
//  Created by 郭茜 on 2021/5/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface QNWhiteBoardWidgetActionEvent : NSObject

@property (nonatomic,retain,nonnull) NSString * sessionId;

/**
 * widget类型
 */
@property (nonatomic,assign)  int type;

/**
 * 动作类型
 */

@property (nonatomic,assign)  int action;

/**
 * widget名称
 */
    
@property (nonatomic,assign,nonnull) NSString * name;


-(instancetype)initWithDictionary:(NSDictionary *)params_;

@end

NS_ASSUME_NONNULL_END

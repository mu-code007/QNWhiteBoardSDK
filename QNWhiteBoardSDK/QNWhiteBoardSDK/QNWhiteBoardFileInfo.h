//
//  QNWhiteBoardFileInfo.h
//  QNWhiteBoardSDK
//
//  Created by 郭茜 on 2021/5/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface QNWhiteBoardFileInfo : NSObject
@property (nonatomic,retain) NSString * path;
@property (nonatomic,retain) NSString * name;
@property (nonatomic,assign) float left;
@property (nonatomic,assign) float top;
@property (nonatomic,assign) float width;
@property (nonatomic,assign) float height;
@end

NS_ASSUME_NONNULL_END

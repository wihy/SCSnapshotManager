//
//  SCSnapshotContent.h
//  SCSnapshotDemo
//
//  Created by ShannonChen on 2017/3/19.
//  Copyright © 2017年 ShannonChen. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kSingleImageHWRatioMax   2.0  // 最大高宽比

NS_ASSUME_NONNULL_BEGIN

/**
 生成快照的数据模型
 */
@interface SCSnapshotContent : NSObject

@property (nonatomic, copy, nullable) NSString *posterName;             ///< 用户名
@property (nonatomic, copy, nullable) NSString *posterAvatarURLString;  ///< 头像
@property (nonatomic, copy, nullable) NSString *userTagDescription;     ///< 用户标签

@property (nonatomic, copy, nullable) NSString *textContent;            ///< 正文

@property (nonatomic, copy, nullable) NSString *likeCount;              ///< 点赞数
@property (nonatomic, strong, nullable) NSArray <NSString *> *picUrls;  ///< 大图 url
@property (nonatomic, copy, nullable) NSString *shareUrl;               ///< 生成二维码的图文链接
@property (nonatomic, copy) NSString *shareDescription;                 ///< 底部分享文案

// Images
@property (nonatomic, strong, nullable) UIImage *posterAvatarImage;
@property (nonatomic, strong, nullable) UIImage *qrCodeImage;
@property (nonatomic, strong, nullable) NSArray <UIImage *> *downloadedImages;

    
    
+ (instancetype)defaultContent;

@end

NS_ASSUME_NONNULL_END
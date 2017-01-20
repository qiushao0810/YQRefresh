//
//  ViewController.h
//  YQRefresh
//
//  Created by yingqiu huang on 2017/1/15.
//  Copyright © 2017年 yingqiu huang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

/**
 *  是否自动加载更多，默认上拉超过scrollView的内容高度时，直接加载更多
 */
@property (nonatomic, unsafe_unretained) BOOL autoLoadMore;

@end


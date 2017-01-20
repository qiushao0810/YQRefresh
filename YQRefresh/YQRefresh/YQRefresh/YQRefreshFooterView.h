//
//  YQRefreshFooterView.h
//  YQRefresh
//
//  Created by yingqiu huang on 2017/1/20.
//  Copyright © 2017年 yingqiu huang. All rights reserved.
//

#import "YQRefreshBaseView.h"

@interface YQRefreshFooterView : YQRefreshBaseView

/**
 *  是否自动加载更多，默认上拉超过scrollView的内容高度时，直接加载更多
 */
@property (nonatomic, unsafe_unretained) BOOL autoLoadMore;



+ (instancetype)footerWithRefreshHandler:(YQRefreshHandler)refreshHandler;

//显示没有更多数据
- (void)showNoMoreData;
//重置没有更多的数据（消除没有更多数据的状态）
- (void)resetNoMoreData;

@end

//
//  UIScrollView+YQRefresh.h
//  YQRefresh
//
//  Created by yingqiu huang on 2017/1/20.
//  Copyright © 2017年 yingqiu huang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YQRefreshBaseView.h"

@class YQRefreshHeaderView;
@class YQRefreshFooterView;

@interface UIScrollView (YQRefresh)

- (YQRefreshHeaderView *)addHeaderWithRefreshHandler:(YQRefreshHandler)refreshHandler;
- (YQRefreshFooterView *)addFooterWithRefreshHandler:(YQRefreshHandler)refreshHandler;
@end

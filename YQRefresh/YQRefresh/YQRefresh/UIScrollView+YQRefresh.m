//
//  UIScrollView+YQRefresh.m
//  YQRefresh
//
//  Created by yingqiu huang on 2017/1/20.
//  Copyright © 2017年 yingqiu huang. All rights reserved.
//

#import "UIScrollView+YQRefresh.h"
#import "YQRefreshHeaderView.h"
#import "YQRefreshFooterView.h"

@implementation UIScrollView (YQRefresh)

- (YQRefreshHeaderView *)addHeaderWithRefreshHandler:(YQRefreshHandler)refreshHandler {
    
    YQRefreshHeaderView *header = [YQRefreshHeaderView headerWithRefreshHandler:refreshHandler];
    header.scrollView = self;
    return header;
    
}

- (YQRefreshFooterView *)addFooterWithRefreshHandler:(YQRefreshHandler)refreshHandler {
    
    YQRefreshFooterView *footer = [YQRefreshFooterView footerWithRefreshHandler:refreshHandler];
    footer.scrollView = self;
    return footer;
}

@end

//
//  YQRefreshBaseView.h
//  YQRefresh
//
//  Created by yingqiu huang on 2017/1/20.
//  Copyright © 2017年 yingqiu huang. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, YQRefreshState){
    YQRefreshStateNormal = 1,
    YQRefreshStatePulling = 2,
    YQRefreshStateLoading = 3,
    YQRefreshStateNoMoreData = 4
};

typedef NS_ENUM(NSInteger, YQRefreshViewType){
    YQRefreshViewTypeHeader = -1,
    YQRefreshViewTypeFooter = 1
};

/** 刷新偏移量的高度 */
static const CGFloat YQLoadingOffsetHeight = 60;

/** 文本颜色 */
#define YQREFRESHTEXTCOLOR [UIColor colorWithRed:150/255.0 green:150/255.0 blue:150/255.0 alpha:1.0]

@class YQRefreshBaseView;
typedef void(^YQRefreshHandler)(YQRefreshBaseView *refreshView);

@interface YQRefreshBaseView : UIView
{
    UILabel *_timeLabel;
    UILabel *_statusLabel;
    UIImageView *_arrowImage;
    UIActivityIndicatorView *_activityView;
    UIEdgeInsets _originalEdgeInset;
}

/** 添加刷新的scrollView */
@property (nonatomic,weak) UIScrollView *scrollView;
/** 刷新的相应事件 */
@property (nonatomic,copy) YQRefreshHandler refreshHandler;
/** 当前刷新状态 */
@property (nonatomic,unsafe_unretained) YQRefreshState refreshState;
/** 正常状态文本 */
@property (nonatomic, copy) NSString *normalStateText;
/** 下拉状态提示文本 */
@property (nonatomic, copy) NSString *pullingStateText;
/** 加载中的提示文本 */
@property (nonatomic, copy) NSString *loadingStateText;
/** 没有更多数据提示文本 */
@property (nonatomic, copy) NSString *noMoreDataStateText;


/** 
 *  设置各种状态的文本 
 */
- (void)setStateText;

/**
 *  添加刷新的界面
 *
 *  注：如果想自定义刷新加载界面，可在子类中重写该方法进行布局子界面
 */
- (void)addRefreshContentView;
/**
 *  开始刷新
 */
- (void)startRefresh;
/**
 *  结束刷新
 */
- (void)endRefresh;
/**
 *  当scrollView的contentOffset发生改变的时候调用
 */
- (void)scrollViewContentOffsetDidChange;
/**
 *  当scrollView的contentSize发生改变的时候调用
 */
- (void)scrollViewContentSizeDidChange;


@end

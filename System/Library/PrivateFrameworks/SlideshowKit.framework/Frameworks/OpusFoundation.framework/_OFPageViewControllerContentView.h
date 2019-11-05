/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIView.h>

@class UIPageControl;

@interface _OFPageViewControllerContentView : OFUIView {

	UIPageControl* _pageControl;

}

@property (nonatomic,readonly) UIPageControl * pageControl;              //@synthesize pageControl=_pageControl - In the implementation block
+(Class)layerClass;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIPageControl *)pageControl;
-(void)invalidatePageViewController;
-(void)_setupPageControl:(id)arg1 ;
@end


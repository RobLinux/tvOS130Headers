/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OFUIViewController.h>
#import <OpusFoundation/OFUICircularPagingViewDelegate.h>

@class OFUICircularPagingView, NSString;

@interface OFUICircularPagingViewController : OFUIViewController <OFUICircularPagingViewDelegate> {

	OFUICircularPagingView* _circularPagingView;

}

@property (nonatomic,retain) OFUICircularPagingView * circularPagingView;              //@synthesize circularPagingView=_circularPagingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)circularPagingViewClass;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)commonInit;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillUnload;
-(OFUICircularPagingView *)circularPagingView;
-(void)circularPagingViewDidMoveForward:(id)arg1 ;
-(void)circularPagingViewDidMoveBackward:(id)arg1 ;
-(void)setCircularPagingView:(OFUICircularPagingView *)arg1 ;
@end


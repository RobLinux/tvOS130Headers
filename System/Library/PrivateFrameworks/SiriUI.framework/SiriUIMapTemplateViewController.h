/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUIBaseTemplateViewController.h>
#import <SiriUI/SiriUIMapTemplateViewDelegate.h>

@class SiriUIMapTemplateView, NSString;

@interface SiriUIMapTemplateViewController : SiriUIBaseTemplateViewController <SiriUIMapTemplateViewDelegate>

@property (nonatomic,retain) SiriUIMapTemplateView * view; 
@property (nonatomic,retain) id<SiriUIMapTemplateModel> templateModel; 
@property (assign,nonatomic,__weak) id<SiriUIMapTemplateViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)prepareForDismissal;
-(Class)templateViewClass;
-(void)mapTemplateView:(id)arg1 didModifyPlacemark:(id)arg2 ;
-(void)mapTemplateViewDidSelectMap:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKTableViewCell.h>
#import <PassKitUI/PKLinkedApplicationObserver.h>

@class UIActivityIndicatorView, UIColor, PKLinkedApplication, NSArray, NSURL, NSString;

@interface PKLinkedApplicationActionCell : PKTableViewCell <PKLinkedApplicationObserver> {

	UIActivityIndicatorView* _activityIndicator;
	UIColor* _textColor;
	UIColor* _disabledTextColor;
	PKLinkedApplication* _linkedApplication;

}

@property (nonatomic,copy) UIColor * textColor;                                      //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy) UIColor * disabledTextColor;                              //@synthesize disabledTextColor=_disabledTextColor - In the implementation block
@property (nonatomic,readonly) PKLinkedApplication * linkedApplication;              //@synthesize linkedApplication=_linkedApplication - In the implementation block
@property (nonatomic,copy) NSArray * storeIDs; 
@property (nonatomic,copy) NSURL * appLaunchURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setDisabledTextColor:(UIColor *)arg1 ;
-(UIColor *)disabledTextColor;
-(NSArray *)storeIDs;
-(void)setStoreIDs:(NSArray *)arg1 ;
-(NSURL *)appLaunchURL;
-(void)setAppLaunchURL:(NSURL *)arg1 ;
-(void)linkedApplicationDidChangeState:(id)arg1 ;
-(void)reloadApplicationStateIfNecessary;
-(id)initWithStoreIDs:(id)arg1 appLaunchURL:(id)arg2 reuseIdentifier:(id)arg3 ;
-(PKLinkedApplication *)linkedApplication;
-(id)initWithLinkedApplication:(id)arg1 reuseIdentifier:(id)arg2 ;
@end


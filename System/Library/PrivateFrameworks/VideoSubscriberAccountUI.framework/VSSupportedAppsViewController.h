/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol VSSupportedAppsViewControllerDelegate;
@class VSOptional, VSAuditToken, NSOperationQueue, NSArray;

@interface VSSupportedAppsViewController : UIViewController {

	VSOptional* _identityProvider;
	VSAuditToken* _auditToken;
	id<VSSupportedAppsViewControllerDelegate> _delegate;
	NSOperationQueue* _privateQueue;
	NSArray* _apps;

}

@property (nonatomic,retain) NSOperationQueue * privateQueue;                                        //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,copy) NSArray * apps;                                                           //@synthesize apps=_apps - In the implementation block
@property (nonatomic,retain) VSOptional * identityProvider;                                          //@synthesize identityProvider=_identityProvider - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                                                //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic,__weak) id<VSSupportedAppsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<VSSupportedAppsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VSSupportedAppsViewControllerDelegate>)arg1 ;
-(VSAuditToken *)auditToken;
-(NSArray *)apps;
-(void)setApps:(NSArray *)arg1 ;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)_didFinish;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(VSOptional *)identityProvider;
-(void)setIdentityProvider:(VSOptional *)arg1 ;
-(void)_presentError:(id)arg1 ;
-(void)beginLoadingApps;
-(void)_doneButtonPresed:(id)arg1 ;
-(void)_finishLoadingApps:(id)arg1 ;
@end


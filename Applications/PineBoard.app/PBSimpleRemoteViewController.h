/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:30 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <PineBoard/PBSViewServiceInterface.h>

@protocol PBSimpleRemoteViewControllerDelegate;
@class BSSimpleAssertion, BSWatchdog, NSString;

@interface PBSimpleRemoteViewController : _UIRemoteViewController <PBSViewServiceInterface> {

	BOOL _terminated;
	unsigned long long _version;
	id<PBSimpleRemoteViewControllerDelegate> _delegate;
	BSSimpleAssertion* _dismissalAssertion;
	BSWatchdog* _dismissalWatchdog;

}

@property (nonatomic,readonly) BSSimpleAssertion * dismissalAssertion;                              //@synthesize dismissalAssertion=_dismissalAssertion - In the implementation block
@property (nonatomic,readonly) BSWatchdog * dismissalWatchdog;                                      //@synthesize dismissalWatchdog=_dismissalWatchdog - In the implementation block
@property (nonatomic,readonly) BOOL terminated;                                                     //@synthesize terminated=_terminated - In the implementation block
@property (assign,nonatomic) unsigned long long version;                                            //@synthesize version=_version - In the implementation block
@property (assign,nonatomic,__weak) id<PBSimpleRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)dealloc;
-(id<PBSimpleRemoteViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PBSimpleRemoteViewControllerDelegate>)arg1 ;
-(unsigned long long)version;
-(void)setVersion:(unsigned long long)arg1 ;
-(BOOL)terminated;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)dismissWithResult:(id)arg1 ;
-(void)messageViewServiceWithMessage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)prepareViewServiceAnimated:(BOOL)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissViewServiceAnimated:(BOOL)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_dismissViewServiceAnimated:(BOOL)arg1 withOptions:(id)arg2 dismissalResult:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BSSimpleAssertion *)dismissalAssertion;
-(BSWatchdog *)dismissalWatchdog;
@end


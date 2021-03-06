/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXChangeObserver.h>
#import <PhotosUICore/PXCPLService.h>

@class PXCPLStatus, PXCPLState, PXCPLServiceStatus, NSString;

@interface PXUICPLService : NSObject <PXChangeObserver, PXCPLService> {

	PXCPLStatus* _statusProvider;
	PXCPLState* _state;
	PXCPLServiceStatus* _serviceStatus;
	/*^block*/id _handler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id handler;                              //@synthesize handler=_handler - In the implementation block
-(id)init;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)performAction:(long long)arg1 ;
-(void)_setState:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(BOOL)canPerformAction:(long long)arg1 ;
-(void)_serviceStatusDidChange:(id)arg1 ;
@end


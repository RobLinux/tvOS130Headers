/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXCPLService.h>

@protocol OS_dispatch_queue, PXCPLService;
@class NSObject, PXCPLServiceStatus, NSString;

@interface PXMockCPLService : NSObject <PXCPLService> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	id<PXCPLService> _cplService;
	PXCPLServiceStatus* _serviceStatus;
	/*^block*/id _handler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id handler;                              //@synthesize handler=_handler - In the implementation block
+(id)_mockEvent;
+(BOOL)shouldUseMockService;
-(id)init;
-(void)dealloc;
-(id)handler;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setHandler:(id)arg1 ;
-(void)performAction:(long long)arg1 ;
-(BOOL)canPerformAction:(long long)arg1 ;
-(id)initWithCPLService:(id)arg1 ;
-(void)_deliverMockServiceStatus;
-(void)_serviceStatusDidChange:(id)arg1 ;
@end

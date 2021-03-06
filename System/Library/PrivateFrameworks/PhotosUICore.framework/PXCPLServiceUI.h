/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXCPLService, PXCPLServiceUIStatus, PXCPLServiceUIDelegate;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXCPLServiceStatus;

@interface PXCPLServiceUI : NSObject {

	id<PXCPLService> _cplService;
	SCD_Struct_PX52 _delegateRespondsTo;
	PXCPLServiceStatus* _serviceStatus;
	id<PXCPLServiceUIStatus> _serviceUIStatus;
	id<PXCPLServiceUIDelegate> _delegate;

}

@property (nonatomic,readonly) PXCPLServiceStatus * serviceStatus;                    //@synthesize serviceStatus=_serviceStatus - In the implementation block
@property (nonatomic,readonly) id<PXCPLServiceUIStatus> serviceUIStatus;              //@synthesize serviceUIStatus=_serviceUIStatus - In the implementation block
@property (assign,nonatomic,__weak) id<PXCPLServiceUIDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<PXCPLServiceUIDelegate>)delegate;
-(void)setDelegate:(id<PXCPLServiceUIDelegate>)arg1 ;
-(PXCPLServiceStatus *)serviceStatus;
-(void)_performAction:(long long)arg1 ;
-(BOOL)performDefaultHandlerForAction:(long long)arg1 ;
-(id)initWithCPLService:(id)arg1 ;
-(void)_serviceUIStatusDidChange:(id)arg1 onlyProgressDidChange:(BOOL)arg2 ;
-(void)_handleUpdatedServiceStatus:(id)arg1 ;
-(id<PXCPLServiceUIStatus>)serviceUIStatus;
@end


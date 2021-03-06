/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:54 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface SDXPCHelperConnection : NSObject {

	BOOL _activated;
	BOOL _needsTransactionRelease;
	BOOL _invalidateCalled;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connectionToService;
	unsigned long long _intervalID;
	NSString* _signpostName;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,copy) id interruptionHandler;              //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;              //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
+(id)makeActivatedConnection;
-(void)dealloc;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(void)activate;
-(void)setSessionKeepAliveTransactionIdentifier:(id)arg1 ;
-(void)updateShareSheetHostConfiguration:(id)arg1 ;
-(id)monogramImageDataForContact:(id)arg1 style:(long long)arg2 diameter:(double)arg3 monogramsAsFlatImages:(BOOL)arg4 shouldCache:(BOOL)arg5 isContactImage:(BOOL*)arg6 ;
-(id)groupMonogramImageDataForContacts:(id)arg1 style:(long long)arg2 diameter:(double)arg3 shouldCache:(BOOL)arg4 monogramsAsFlatImages:(BOOL)arg5 ;
-(id)urlToCGImgDataForCallHandoffIconWithAppIconImageData:(id)arg1 contact:(id)arg2 ;
-(id)CGImgDataForUIActivityTitle:(id)arg1 foregroundColor:(id)arg2 ;
-(id)CGImgDataForNameLabelWithString:(id)arg1 textColor:(id)arg2 maxNumberOfLines:(unsigned long long)arg3 isAirDrop:(BOOL)arg4 ignoreNameWrapping:(BOOL)arg5 ;
-(id)CGImgDataForActivityMoreListEntryForActivityTitle:(id)arg1 labelColor:(id)arg2 ;
-(id)CGImgDataForActionPlatterWithTitle:(id)arg1 tintColor:(id)arg2 ;
-(id)CGImgDataForNearbyBadgeWithCount:(long long)arg1 ;
@end


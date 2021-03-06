/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSBagProtocol, AMSPurchaseResponseProtocol;
@interface AMSPurchaseQueueConfiguration : NSObject {

	id<AMSBagProtocol> _bag;
	id<AMSPurchaseResponseProtocol> _delegate;

}

@property (nonatomic,readonly) id<AMSBagProtocol> bag;                              //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) id<AMSPurchaseResponseProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AMSPurchaseResponseProtocol>)delegate;
-(void)setDelegate:(id<AMSPurchaseResponseProtocol>)arg1 ;
-(id<AMSBagProtocol>)bag;
-(id)initWithBag:(id)arg1 ;
@end


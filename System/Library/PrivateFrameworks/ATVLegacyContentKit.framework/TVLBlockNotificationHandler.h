/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TVLBlockNotificationHandler : NSObject {

	BOOL _listening;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;              //@synthesize block=_block - In the implementation block
-(void)dealloc;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)_notification:(id)arg1 ;
-(void)stopObservingAll;
-(void)startObservingNotificationName:(id)arg1 object:(id)arg2 ;
@end


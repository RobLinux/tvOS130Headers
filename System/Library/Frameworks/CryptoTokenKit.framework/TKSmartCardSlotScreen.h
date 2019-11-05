/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TKSmartCardSlotScreen : NSObject {

	long long _physicalColumnCount;
	long long _physicalRowCount;
	long long _virtualColumnCount;
	long long _virtualRowCount;

}

@property (assign) long long physicalColumnCount;              //@synthesize physicalColumnCount=_physicalColumnCount - In the implementation block
@property (assign) long long physicalRowCount;                 //@synthesize physicalRowCount=_physicalRowCount - In the implementation block
@property (assign) long long virtualColumnCount;               //@synthesize virtualColumnCount=_virtualColumnCount - In the implementation block
@property (assign) long long virtualRowCount;                  //@synthesize virtualRowCount=_virtualRowCount - In the implementation block
-(BOOL)displayMessage:(id)arg1 x:(long long)arg2 y:(long long)arg3 duration:(double)arg4 clearScreen:(BOOL)arg5 ;
-(long long)physicalColumnCount;
-(void)setPhysicalColumnCount:(long long)arg1 ;
-(long long)physicalRowCount;
-(void)setPhysicalRowCount:(long long)arg1 ;
-(long long)virtualColumnCount;
-(void)setVirtualColumnCount:(long long)arg1 ;
-(long long)virtualRowCount;
-(void)setVirtualRowCount:(long long)arg1 ;
@end


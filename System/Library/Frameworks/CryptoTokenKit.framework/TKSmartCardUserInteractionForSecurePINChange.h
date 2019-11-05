/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CryptoTokenKit/TKSmartCardUserInteractionForPINOperation.h>
#import <CryptoTokenKit/NSSecureCoding.h>

@class TKSmartCardSlot, TKSmartCardPINFormat, NSData;

@interface TKSmartCardUserInteractionForSecurePINChange : TKSmartCardUserInteractionForPINOperation <NSSecureCoding> {

	unsigned long long _PINConfirmation;
	TKSmartCardSlot* _slot;
	TKSmartCardPINFormat* _PINFormat;
	NSData* _APDU;
	long long _currentPINByteOffset;
	long long _newPINByteOffset;

}

@property (__weak) TKSmartCardSlot * slot;                          //@synthesize slot=_slot - In the implementation block
@property (retain) TKSmartCardPINFormat * PINFormat;                //@synthesize PINFormat=_PINFormat - In the implementation block
@property (retain) NSData * APDU;                                   //@synthesize APDU=_APDU - In the implementation block
@property (assign) long long currentPINByteOffset;                  //@synthesize currentPINByteOffset=_currentPINByteOffset - In the implementation block
@property (assign) long long newPINByteOffset;                      //@synthesize newPINByteOffset=_newPINByteOffset - In the implementation block
@property (assign) unsigned long long PINConfirmation;              //@synthesize PINConfirmation=_PINConfirmation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSlot:(TKSmartCardSlot *)arg1 ;
-(TKSmartCardSlot *)slot;
-(void)setSlot:(id)arg1 PINFormat:(id)arg2 APDU:(id)arg3 currentPINByteOffset:(long long)arg4 newPINByteOffset:(long long)arg5 ;
-(void)runWithReply:(/*^block*/id)arg1 ;
-(void)setPINFormat:(TKSmartCardPINFormat *)arg1 ;
-(void)setAPDU:(NSData *)arg1 ;
-(TKSmartCardPINFormat *)PINFormat;
-(NSData *)APDU;
-(void)setCurrentPINByteOffset:(long long)arg1 ;
-(void)setNewPINByteOffset:(long long)arg1 ;
-(unsigned long long)PINConfirmation;
-(void)setPINConfirmation:(unsigned long long)arg1 ;
-(long long)currentPINByteOffset;
-(long long)newPINByteOffset;
@end


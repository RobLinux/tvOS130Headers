/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@interface HAPPairingUtilities : HMFObject
+(id)createAddPairingRequetForPairingIdentity:(id)arg1 error:(id*)arg2 ;
+(id)createRemovePairingRequetForPairingIdentity:(id)arg1 error:(id*)arg2 ;
+(BOOL)parseRemovePairingResponse:(id)arg1 error:(id*)arg2 ;
+(BOOL)parseAddPairingResponse:(id)arg1 error:(id*)arg2 ;
+(id)createListPairingsRequest:(id*)arg1 ;
+(id)parseListPairingsResponse:(id)arg1 error:(id*)arg2 ;
@end


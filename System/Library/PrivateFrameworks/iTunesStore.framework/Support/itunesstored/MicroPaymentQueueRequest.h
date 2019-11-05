/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/NSCopying.h>

@class StoreKitClientIdentity, NSLock, NSNumber;

@interface MicroPaymentQueueRequest : NSObject <NSCopying> {

	StoreKitClientIdentity* _clientIdentity;
	NSLock* _lock;
	NSNumber* _rangeEndIdentifier;
	NSNumber* _rangeStartIdentifier;
	NSNumber* _userIdentifier;

}

@property (copy) StoreKitClientIdentity * clientIdentity; 
@property (readonly) long long URLBagType; 
@property (readonly) BOOL usesSoftwareMap; 
@property (retain) NSNumber * rangeEndIdentifier; 
@property (retain) NSNumber * rangeStartIdentifier; 
@property (retain) NSNumber * userIdentifier; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)setUserIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)userIdentifier;
-(void)setClientIdentity:(StoreKitClientIdentity *)arg1 ;
-(StoreKitClientIdentity *)clientIdentity;
-(long long)URLBagType;
-(id)newStoreURLOperation:(id*)arg1 ;
-(id)_ntsQueryParameters:(id*)arg1 ;
-(id)_copyApplicationIdentity:(id*)arg1 ;
-(NSNumber *)rangeEndIdentifier;
-(NSNumber *)rangeStartIdentifier;
-(void)setRangeEndIdentifier:(NSNumber *)arg1 ;
-(void)setRangeStartIdentifier:(NSNumber *)arg1 ;
-(BOOL)usesSoftwareMap;
@end


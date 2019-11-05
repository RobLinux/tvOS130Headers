/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:19 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Podcasts/Podcasts-Structs.h>
@class MZKeyValueStoreTransaction;

@interface MZKeyValueStoreSerializer : NSObject {

	MZKeyValueStoreTransaction* _transaction;

}

@property (nonatomic,retain) MZKeyValueStoreTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
-(id)keys;
-(id)payload;
-(MZKeyValueStoreTransaction *)transaction;
-(void)setTransaction:(MZKeyValueStoreTransaction *)arg1 ;
-(id)initWithTransaction:(id)arg1 ;
-(id)baseDictionary;
-(id)sinceDomainVersion;
-(MZKeyValueStoreDataVerionPair)objectVersionPairForKey:(id)arg1 ;
-(id)dataWithNodes:(id)arg1 ;
-(BOOL)_isGetAllSinceDomainVersionRequest;
-(BOOL)_isRemoveAllSinceDomainVersion;
@end


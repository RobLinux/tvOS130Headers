/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCopying;
@class MFWeakObjectCache;

@interface _MFWeakObjectCacheRef : NSObject {

	id<NSCopying> _key;
	MFWeakObjectCache* _cache;

}

@property (nonatomic,copy) id<NSCopying> key;                               //@synthesize key=_key - In the implementation block
@property (assign,nonatomic,__weak) MFWeakObjectCache * cache;              //@synthesize cache=_cache - In the implementation block
-(void)dealloc;
-(id<NSCopying>)key;
-(void)setKey:(id<NSCopying>)arg1 ;
-(MFWeakObjectCache *)cache;
-(void)setCache:(MFWeakObjectCache *)arg1 ;
@end


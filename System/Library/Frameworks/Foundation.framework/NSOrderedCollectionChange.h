/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NSOrderedCollectionChange : NSObject {

	id _object;
	long long _changeType;
	unsigned long long _index;
	unsigned long long _associatedIndex;

}

@property (readonly) id object;                                       //@synthesize object=_object - In the implementation block
@property (readonly) long long changeType;                            //@synthesize changeType=_changeType - In the implementation block
@property (readonly) unsigned long long index;                        //@synthesize index=_index - In the implementation block
@property (readonly) unsigned long long associatedIndex;              //@synthesize associatedIndex=_associatedIndex - In the implementation block
+(id)changeWithObject:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3 ;
+(id)changeWithObject:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3 associatedIndex:(unsigned long long)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)init;
-(void)dealloc;
-(id)object;
-(id)initWithObject:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3 ;
-(id)initWithObject:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3 associatedIndex:(unsigned long long)arg4 ;
-(long long)changeType;
-(unsigned long long)index;
-(unsigned long long)associatedIndex;
@end


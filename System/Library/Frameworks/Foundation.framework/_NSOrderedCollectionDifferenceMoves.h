/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _NSOrderedCollectionDifferenceMoves : NSObject {

	NSMutableDictionary* _removeDict;
	NSMutableDictionary* _insertDict;
	unsigned long long _firstRemove;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(id)initWithChanges:(id)arg1 ;
-(unsigned long long)associatedIndexForChangeWithType:(long long)arg1 index:(unsigned long long)arg2 ;
@end


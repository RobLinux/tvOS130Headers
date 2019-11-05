/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/NSCopying.h>
#import <RelevanceEngine/REAutomaticExportedInterface.h>

@class RETaggedFeatureValueArray;

@interface RERelevanceValue : NSObject <NSCopying, REAutomaticExportedInterface> {

	unsigned long long _hash;
	BOOL _isHistoric;
	RETaggedFeatureValueArray* _values;

}

@property (nonatomic,readonly) RETaggedFeatureValueArray * values;              //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) BOOL isHistoric;                                 //@synthesize isHistoric=_isHistoric - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(RETaggedFeatureValueArray *)values;
-(id)initWithValues:(id)arg1 ;
-(BOOL)isHistoric;
-(id)initWithValues:(id)arg1 isHistoric:(BOOL)arg2 ;
@end


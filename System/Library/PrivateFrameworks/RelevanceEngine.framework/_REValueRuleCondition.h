/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RECondition.h>
#import <RelevanceEngine/REAutomaticExportedInterface.h>

@class REFeature;

@interface _REValueRuleCondition : RECondition <REAutomaticExportedInterface> {

	BOOL _allowsEmptyValueForFeature;
	REFeature* _feature;
	long long _relation;
	unsigned long long _value;

}

@property (nonatomic,readonly) REFeature * feature;                   //@synthesize feature=_feature - In the implementation block
@property (nonatomic,readonly) long long relation;                    //@synthesize relation=_relation - In the implementation block
@property (nonatomic,readonly) unsigned long long value;              //@synthesize value=_value - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)value;
-(long long)relation;
-(REFeature *)feature;
-(id)_dependentFeatures;
-(id)_notCondition;
-(BOOL)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3 ;
-(id)_inflectionFeatureValuePairs;
-(id)initWithFeature:(id)arg1 relation:(long long)arg2 value:(unsigned long long)arg3 ;
@end

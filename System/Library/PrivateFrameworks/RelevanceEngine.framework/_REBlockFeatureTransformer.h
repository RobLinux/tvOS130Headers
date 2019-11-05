/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REFeatureTransformer.h>

@interface _REBlockFeatureTransformer : REFeatureTransformer {

	unsigned long long _featureCount;
	unsigned long long _outputFeatureType;
	/*^block*/id _block;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)_outputType;
-(long long)_bitCount;
-(unsigned long long)_featureCount;
-(unsigned long long)_createTransformFromValues:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)_validateWithFeatures:(id)arg1 ;
-(id)initWithFeatureCount:(unsigned long long)arg1 outputFeatureType:(unsigned long long)arg2 transformation:(/*^block*/id)arg3 ;
@end


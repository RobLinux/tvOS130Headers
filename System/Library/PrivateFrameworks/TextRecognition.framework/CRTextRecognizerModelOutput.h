/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextRecognition/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface CRTextRecognizerModelOutput : NSObject <MLFeatureProvider> {

	MLMultiArray* _output_label_prob_map;

}

@property (nonatomic,retain) MLMultiArray * output_label_prob_map;              //@synthesize output_label_prob_map=_output_label_prob_map - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithOutput_label_prob_map:(id)arg1 ;
-(MLMultiArray *)output_label_prob_map;
-(void)setOutput_label_prob_map:(MLMultiArray *)arg1 ;
@end


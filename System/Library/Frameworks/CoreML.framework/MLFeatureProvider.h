/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol MLFeatureProvider
@property (nonatomic,readonly) NSSet * featureNames; 
@required
-(id)featureValueForName:(id)arg1;
-(NSSet *)featureNames;

@end


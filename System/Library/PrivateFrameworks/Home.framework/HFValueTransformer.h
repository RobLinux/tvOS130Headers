/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HFValueTransformer : NSObject {

	Class _valueClass;
	/*^block*/id _transformBlock;
	/*^block*/id _reverseTransformBlock;

}

@property (nonatomic,retain) Class valueClass;                    //@synthesize valueClass=_valueClass - In the implementation block
@property (nonatomic,copy) id transformBlock;                     //@synthesize transformBlock=_transformBlock - In the implementation block
@property (nonatomic,copy) id reverseTransformBlock;              //@synthesize reverseTransformBlock=_reverseTransformBlock - In the implementation block
+(id)transformerForValueClass:(Class)arg1 transformBlock:(/*^block*/id)arg2 reverseTransformBlock:(/*^block*/id)arg3 ;
+(id)identityTransformer;
-(Class)valueClass;
-(void)setValueClass:(Class)arg1 ;
-(void)setTransformBlock:(id)arg1 ;
-(id)transformBlock;
-(void)setReverseTransformBlock:(id)arg1 ;
-(id)reverseTransformBlock;
-(id)transformedValueForValue:(id)arg1 ;
-(id)valueForTransformedValue:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class INCodableAttribute, INImage;

@interface INIntentKeyParameter : NSObject {

	INCodableAttribute* _codableAttribute;
	id _value;
	INImage* _image;

}

@property (nonatomic,readonly) INCodableAttribute * codableAttribute;              //@synthesize codableAttribute=_codableAttribute - In the implementation block
@property (nonatomic,readonly) id value;                                           //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) INImage * image;                                    //@synthesize image=_image - In the implementation block
-(id)value;
-(INImage *)image;
-(id)initWithCodableAttribute:(id)arg1 value:(id)arg2 image:(id)arg3 ;
-(INCodableAttribute *)codableAttribute;
@end


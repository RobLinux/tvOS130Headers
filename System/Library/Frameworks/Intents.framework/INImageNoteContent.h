/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INNoteContent.h>
#import <Intents/INCacheableContainer.h>
#import <Intents/INImageProxyInjecting.h>
#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class INImage, NSString;

@interface INImageNoteContent : INNoteContent <INCacheableContainer, INImageProxyInjecting, NSSecureCoding, NSCopying> {

	INImage* _image;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=_setImage:,nonatomic,copy) INImage * image;              //@synthesize image=_image - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(INImage *)image;
-(id)initWithImage:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2 ;
-(id)_initWithImage:(id)arg1 ;
-(void)_setImage:(id)arg1 ;
@end


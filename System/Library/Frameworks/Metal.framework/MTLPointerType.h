/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLType.h>

@interface MTLPointerType : MTLType

@property (readonly) unsigned long long elementType; 
@property (readonly) unsigned long long access; 
@property (readonly) unsigned long long alignment; 
@property (readonly) unsigned long long dataSize; 
@property (readonly) BOOL elementIsArgumentBuffer; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)elementStructType;
-(id)elementArrayType;
@end


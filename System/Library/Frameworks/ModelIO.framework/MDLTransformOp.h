/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MDLTransformOp
@property (nonatomic,readonly) NSString * name; 
@required
-(NSString *)name;
-(/*function pointer*/void**)float4x4AtTime:(double)arg1;
-(/*function pointer*/void**)double4x4AtTime:(double)arg1;
-(BOOL)IsInverseOp;

@end


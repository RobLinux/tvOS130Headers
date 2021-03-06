/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Metal/Metal-Structs.h>
@interface _MTLIndirectDispatchThreadgroupsArguments : NSObject {

	SCD_Struct_MT8 _threadgroupsPerGrid;
	SCD_Struct_MT8 _threadsPerThreadgroup;

}

@property (assign,nonatomic) SCD_Struct_MT8 threadgroupsPerGrid;                //@synthesize threadgroupsPerGrid=_threadgroupsPerGrid - In the implementation block
@property (assign,nonatomic) SCD_Struct_MT8 threadsPerThreadgroup;              //@synthesize threadsPerThreadgroup=_threadsPerThreadgroup - In the implementation block
-(SCD_Struct_MT8)threadgroupsPerGrid;
-(void)setThreadgroupsPerGrid:(SCD_Struct_MT8)arg1 ;
-(SCD_Struct_MT8)threadsPerThreadgroup;
-(void)setThreadsPerThreadgroup:(SCD_Struct_MT8)arg1 ;
@end


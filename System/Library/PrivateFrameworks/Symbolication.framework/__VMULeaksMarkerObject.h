/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@interface __VMULeaksMarkerObject : NSObject {

	SCD_Struct_VM9* _region;
	unsigned _entryIndex;

}

@property (assign,nonatomic) SCD_Struct_VM9* region;              //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) unsigned entryIndex;                 //@synthesize entryIndex=_entryIndex - In the implementation block
-(void)dealloc;
-(SCD_Struct_VM9*)region;
-(void)setRegion:(SCD_Struct_VM9*)arg1 ;
-(unsigned)entryIndex;
-(void)setEntryIndex:(unsigned)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ACCNavigationRoadObjectRoadLaneInfo : NSObject {

	NSMutableDictionary* _infoDict;

}

@property (retain) NSMutableDictionary * infoDict;              //@synthesize infoDict=_infoDict - In the implementation block
+(id)keyForType:(unsigned short)arg1 ;
-(id)description;
-(id)init;
-(id)copyDictionary;
-(BOOL)_checkDataClassForType:(unsigned short)arg1 data:(id)arg2 ;
-(id)copyInfo:(unsigned short)arg1 ;
-(BOOL)setInfo:(unsigned short)arg1 data:(id)arg2 ;
-(NSMutableDictionary *)infoDict;
-(void)setInfoDict:(NSMutableDictionary *)arg1 ;
-(void)setInfoFromDictionary:(id)arg1 ;
@end


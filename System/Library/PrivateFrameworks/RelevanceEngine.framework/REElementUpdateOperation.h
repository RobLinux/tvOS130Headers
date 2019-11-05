/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REElement, RESectionPath;

@interface REElementUpdateOperation : NSObject {

	REElement* _element;
	RESectionPath* _path;
	RESectionPath* _movedToPath;
	unsigned long long _type;

}

@property (nonatomic,readonly) REElement * element;                      //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) RESectionPath * path;                     //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) RESectionPath * movedToPath;              //@synthesize movedToPath=_movedToPath - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                  //@synthesize type=_type - In the implementation block
+(id)reloadElement:(id)arg1 atPath:(id)arg2 ;
+(id)insertElement:(id)arg1 atPath:(id)arg2 ;
+(id)removeElement:(id)arg1 atPath:(id)arg2 ;
+(id)moveElement:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3 ;
+(id)refreshElement:(id)arg1 atPath:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(REElement *)element;
-(RESectionPath *)path;
-(RESectionPath *)movedToPath;
-(id)initWithElement:(id)arg1 path:(id)arg2 newPath:(id)arg3 updateType:(unsigned long long)arg4 ;
@end


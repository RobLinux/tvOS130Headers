/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <accessoryd/accessoryd-Structs.h>
@class NSString, ACCMediaLibraryUpdatePlaylistContent;

@interface ACCMediaLibraryUpdatePlaylist : NSObject {

	BOOL _folder;
	BOOL _geniusMix;
	BOOL _radioStation;
	BOOL _smartPlaylist;
	unsigned short _radioStationOrdering;
	int _contentStyle;
	NSString* _mediaLibraryUID;
	NSString* _revision;
	unsigned long long _persistentID;
	unsigned long long _validMask;
	NSString* _name;
	unsigned long long _parentPersistentID;
	ACCMediaLibraryUpdatePlaylistContent* _content;

}

@property (nonatomic,retain) NSString * mediaLibraryUID;                                  //@synthesize mediaLibraryUID=_mediaLibraryUID - In the implementation block
@property (nonatomic,retain) NSString * revision;                                         //@synthesize revision=_revision - In the implementation block
@property (assign,nonatomic) unsigned long long persistentID;                             //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,readonly) unsigned long long validMask;                              //@synthesize validMask=_validMask - In the implementation block
@property (nonatomic,retain) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long parentPersistentID;                       //@synthesize parentPersistentID=_parentPersistentID - In the implementation block
@property (assign,nonatomic) BOOL folder;                                                 //@synthesize folder=_folder - In the implementation block
@property (assign,nonatomic) BOOL geniusMix;                                              //@synthesize geniusMix=_geniusMix - In the implementation block
@property (assign,nonatomic) BOOL radioStation;                                           //@synthesize radioStation=_radioStation - In the implementation block
@property (assign,nonatomic) BOOL smartPlaylist;                                          //@synthesize smartPlaylist=_smartPlaylist - In the implementation block
@property (assign,nonatomic) unsigned short radioStationOrdering;                         //@synthesize radioStationOrdering=_radioStationOrdering - In the implementation block
@property (assign,nonatomic) int contentStyle;                                            //@synthesize contentStyle=_contentStyle - In the implementation block
@property (nonatomic,retain) ACCMediaLibraryUpdatePlaylistContent * content;              //@synthesize content=_content - In the implementation block
-(NSString *)name;
-(id)debugDescription;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(ACCMediaLibraryUpdatePlaylistContent *)content;
-(unsigned long long)persistentID;
-(void)setPersistentID:(unsigned long long)arg1 ;
-(void)setContent:(ACCMediaLibraryUpdatePlaylistContent *)arg1 ;
-(void)setRevision:(NSString *)arg1 ;
-(BOOL)folder;
-(NSString *)revision;
-(BOOL)geniusMix;
-(BOOL)radioStation;
-(void)setFolder:(BOOL)arg1 ;
-(void)setRadioStation:(BOOL)arg1 ;
-(int)contentStyle;
-(id)initWithMediaLibrary:(id)arg1 dict:(id)arg2 ;
-(void)fillStruct:(SCD_Struct_AC9*)arg1 ;
-(id)copyDict;
-(void)setMediaLibraryUID:(NSString *)arg1 ;
-(NSString *)mediaLibraryUID;
-(unsigned long long)validMask;
-(id)initWithMediaLibrary:(id)arg1 persistentID:(unsigned long long)arg2 revision:(id)arg3 ;
-(void)setParentPersistentID:(unsigned long long)arg1 ;
-(void)setGeniusMix:(BOOL)arg1 ;
-(void)setContentStyle:(int)arg1 ;
-(void)setSmartPlaylist:(BOOL)arg1 ;
-(void)setRadioStationOrdering:(unsigned short)arg1 ;
-(unsigned long long)parentPersistentID;
-(BOOL)smartPlaylist;
-(unsigned short)radioStationOrdering;
@end

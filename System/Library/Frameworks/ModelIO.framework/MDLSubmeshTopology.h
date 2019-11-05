/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MDLMeshBuffer;
@interface MDLSubmeshTopology : NSObject {

	id<MDLMeshBuffer> _faceTopology;
	unsigned long long _faceCount;
	id<MDLMeshBuffer> _vertexCreaseIndices;
	id<MDLMeshBuffer> _vertexCreases;
	unsigned long long _vertexCreaseCount;
	id<MDLMeshBuffer> _edgeCreaseIndices;
	id<MDLMeshBuffer> _edgeCreases;
	unsigned long long _edgeCreaseCount;
	id<MDLMeshBuffer> _holes;
	unsigned long long _holeCount;

}

@property (nonatomic,retain) id<MDLMeshBuffer> faceTopology;                     //@synthesize faceTopology=_faceTopology - In the implementation block
@property (assign,nonatomic) unsigned long long faceCount;                       //@synthesize faceCount=_faceCount - In the implementation block
@property (nonatomic,retain) id<MDLMeshBuffer> vertexCreaseIndices;              //@synthesize vertexCreaseIndices=_vertexCreaseIndices - In the implementation block
@property (nonatomic,retain) id<MDLMeshBuffer> vertexCreases;                    //@synthesize vertexCreases=_vertexCreases - In the implementation block
@property (assign,nonatomic) unsigned long long vertexCreaseCount;               //@synthesize vertexCreaseCount=_vertexCreaseCount - In the implementation block
@property (nonatomic,retain) id<MDLMeshBuffer> edgeCreaseIndices;                //@synthesize edgeCreaseIndices=_edgeCreaseIndices - In the implementation block
@property (nonatomic,retain) id<MDLMeshBuffer> edgeCreases;                      //@synthesize edgeCreases=_edgeCreases - In the implementation block
@property (assign,nonatomic) unsigned long long edgeCreaseCount;                 //@synthesize edgeCreaseCount=_edgeCreaseCount - In the implementation block
@property (nonatomic,retain) id<MDLMeshBuffer> holes;                            //@synthesize holes=_holes - In the implementation block
@property (assign,nonatomic) unsigned long long holeCount;                       //@synthesize holeCount=_holeCount - In the implementation block
-(unsigned long long)faceCount;
-(id<MDLMeshBuffer>)faceTopology;
-(void)setFaceTopology:(id<MDLMeshBuffer>)arg1 ;
-(void)setFaceCount:(unsigned long long)arg1 ;
-(void)setEdgeCreaseIndices:(id<MDLMeshBuffer>)arg1 ;
-(void)setEdgeCreaseCount:(unsigned long long)arg1 ;
-(void)setEdgeCreases:(id<MDLMeshBuffer>)arg1 ;
-(void)setVertexCreaseIndices:(id<MDLMeshBuffer>)arg1 ;
-(void)setVertexCreaseCount:(unsigned long long)arg1 ;
-(void)setVertexCreases:(id<MDLMeshBuffer>)arg1 ;
-(id<MDLMeshBuffer>)vertexCreaseIndices;
-(id<MDLMeshBuffer>)vertexCreases;
-(unsigned long long)vertexCreaseCount;
-(id<MDLMeshBuffer>)edgeCreaseIndices;
-(id<MDLMeshBuffer>)edgeCreases;
-(unsigned long long)edgeCreaseCount;
-(id<MDLMeshBuffer>)holes;
-(unsigned long long)holeCount;
-(id)initWithSubmesh:(id)arg1 ;
-(void)setHoles:(id<MDLMeshBuffer>)arg1 ;
-(void)setHoleCount:(unsigned long long)arg1 ;
@end


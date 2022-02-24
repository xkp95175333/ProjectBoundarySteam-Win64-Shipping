// Class EditableMesh.EditableMeshAdapter
// Size: 0x28 (Inherited: 0x28)
struct UEditableMeshAdapter : UObject {
};

// Class EditableMesh.EditableGeometryCollectionAdapter
// Size: 0xd8 (Inherited: 0x28)
struct UEditableGeometryCollectionAdapter : UEditableMeshAdapter {
	struct UGeometryCollection* GeometryCollection; // 0x28(0x08)
	struct UGeometryCollection* OriginalGeometryCollection; // 0x30(0x08)
	int32_t GeometryCollectionLODIndex; // 0x38(0x04)
	char pad_3C[0x9c]; // 0x3c(0x9c)
};

// Class EditableMesh.EditableMesh
// Size: 0x708 (Inherited: 0x28)
struct UEditableMesh : UObject {
	char pad_28[0x390]; // 0x28(0x390)
	struct TArray<struct UEditableMeshAdapter*> Adapters; // 0x3b8(0x10)
	char pad_3C8[0x8]; // 0x3c8(0x08)
	int32_t TextureCoordinateCount; // 0x3d0(0x04)
	char pad_3D4[0x148]; // 0x3d4(0x148)
	int32_t PendingCompactCounter; // 0x51c(0x04)
	int32_t SubdivisionCount; // 0x520(0x04)
	char pad_524[0x1e4]; // 0x524(0x1e4)

	void WeldVertices(struct TArray<struct FVertexID> VertexIDs, struct FVertexID OutNewVertexID); // Function EditableMesh.EditableMesh.WeldVertices // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xade2b0
	void TryToRemoveVertex(struct FVertexID VertexID, bool bOutWasVertexRemoved, struct FEdgeID OutNewEdgeID); // Function EditableMesh.EditableMesh.TryToRemoveVertex // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xade180
	void TryToRemovePolygonEdge(struct FEdgeID EdgeID, bool bOutWasEdgeRemoved, struct FPolygonID OutNewPolygonID); // Function EditableMesh.EditableMesh.TryToRemovePolygonEdge // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xade050
	void TriangulatePolygons(struct TArray<struct FPolygonID> PolygonIDs, struct TArray<struct FPolygonID> OutNewTrianglePolygons); // Function EditableMesh.EditableMesh.TriangulatePolygons // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xaddf30
	void TessellatePolygons(struct TArray<struct FPolygonID> PolygonIDs, enum class ETriangleTessellationMode TriangleTessellationMode, struct TArray<struct FPolygonID> OutNewPolygonIDs); // Function EditableMesh.EditableMesh.TessellatePolygons // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xadddd0
	void StartModification(enum class EMeshModificationType MeshModificationType, enum class EMeshTopologyChange MeshTopologyChange); // Function EditableMesh.EditableMesh.StartModification // (Final|Native|Public|BlueprintCallable) // @ game+0xaddd00
	void SplitPolygons(struct TArray<struct FPolygonToSplit> PolygonsToSplit, struct TArray<struct FEdgeID> OutNewEdgeIDs); // Function EditableMesh.EditableMesh.SplitPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xaddbc0
	void SplitPolygonalMesh(struct FPlane InPlane, struct TArray<struct FPolygonID> PolygonIDs1, struct TArray<struct FPolygonID> PolygonIDs2, struct TArray<struct FEdgeID> BoundaryIDs); // Function EditableMesh.EditableMesh.SplitPolygonalMesh // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xadd9f0
	void SplitEdge(struct FEdgeID EdgeID, struct TArray<float> Splits, struct TArray<struct FVertexID> OutNewVertexIDs); // Function EditableMesh.EditableMesh.SplitEdge // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xadd890
	void SetVerticesCornerSharpness(struct TArray<struct FVertexID> VertexIDs, struct TArray<float> VerticesNewCornerSharpness); // Function EditableMesh.EditableMesh.SetVerticesCornerSharpness // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xadd770
	void SetVerticesAttributes(struct TArray<struct FAttributesForVertex> AttributesForVertices); // Function EditableMesh.EditableMesh.SetVerticesAttributes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xadd6a0
	void SetVertexInstancesAttributes(struct TArray<struct FAttributesForVertexInstance> AttributesForVertexInstances); // Function EditableMesh.EditableMesh.SetVertexInstancesAttributes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xadd5d0
	void SetTextureCoordinateCount(int32_t NumTexCoords); // Function EditableMesh.EditableMesh.SetTextureCoordinateCount // (Final|Native|Public|BlueprintCallable) // @ game+0xadd540
	void SetSubdivisionCount(int32_t NewSubdivisionCount); // Function EditableMesh.EditableMesh.SetSubdivisionCount // (Final|Native|Public|BlueprintCallable) // @ game+0xadd4b0
	void SetPolygonsVertexAttributes(struct TArray<struct FVertexAttributesForPolygon> VertexAttributesForPolygons); // Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xadd320
	void SetEdgesHardnessAutomatically(struct TArray<struct FEdgeID> EdgeIDs, float MaxDotProductForSoftEdge); // Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xadd220
	void SetEdgesHardness(struct TArray<struct FEdgeID> EdgeIDs, struct TArray<bool> EdgesNewIsHard); // Function EditableMesh.EditableMesh.SetEdgesHardness // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xadd100
	void SetEdgesCreaseSharpness(struct TArray<struct FEdgeID> EdgeIDs, struct TArray<float> EdgesNewCreaseSharpness); // Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xadcfe0
	void SetEdgesAttributes(struct TArray<struct FAttributesForEdge> AttributesForEdges); // Function EditableMesh.EditableMesh.SetEdgesAttributes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xadcf10
	void SetAllowUndo(bool bInAllowUndo); // Function EditableMesh.EditableMesh.SetAllowUndo // (Final|Native|Public|BlueprintCallable) // @ game+0xadce80
	void SetAllowSpatialDatabase(bool bInAllowSpatialDatabase); // Function EditableMesh.EditableMesh.SetAllowSpatialDatabase // (Final|Native|Public|BlueprintCallable) // @ game+0xadcdf0
	void SetAllowCompact(bool bInAllowCompact); // Function EditableMesh.EditableMesh.SetAllowCompact // (Final|Native|Public|BlueprintCallable) // @ game+0xadcd60
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(struct FPlane InPlane, struct TArray<struct FPolygonID> OutPolygons); // Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xadcc60
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(struct FVector LineSegmentStart, struct FVector LineSegmentEnd, struct TArray<struct FPolygonID> OutPolygons); // Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xadcb10
	void SearchSpatialDatabaseForPolygonsInVolume(struct TArray<struct FPlane> Planes, struct TArray<struct FPolygonID> OutPolygons); // Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xadc9f0
	struct UEditableMesh* RevertInstance(); // Function EditableMesh.EditableMesh.RevertInstance // (Final|Native|Public|BlueprintCallable) // @ game+0xadc9c0
	void Revert(); // Function EditableMesh.EditableMesh.Revert // (Final|Native|Public|BlueprintCallable) // @ game+0x9c37b0
	void RebuildRenderMesh(); // Function EditableMesh.EditableMesh.RebuildRenderMesh // (Final|Native|Public|BlueprintCallable) // @ game+0xadc9a0
	void QuadrangulateMesh(struct TArray<struct FPolygonID> OutNewPolygonIDs); // Function EditableMesh.EditableMesh.QuadrangulateMesh // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xadc8f0
	void PropagateInstanceChanges(); // Function EditableMesh.EditableMesh.PropagateInstanceChanges // (Final|Native|Public|BlueprintCallable) // @ game+0x9c37b0
	void MoveVertices(struct TArray<struct FVertexToMove> VerticesToMove); // Function EditableMesh.EditableMesh.MoveVertices // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xadc840
	struct FVertexID MakeVertexID(int32_t VertexIndex); // Function EditableMesh.EditableMesh.MakeVertexID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xadc7c0
	struct FPolygonID MakePolygonID(int32_t PolygonIndex); // Function EditableMesh.EditableMesh.MakePolygonID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xadc7c0
	struct FPolygonGroupID MakePolygonGroupID(int32_t PolygonGroupIndex); // Function EditableMesh.EditableMesh.MakePolygonGroupID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xadc7c0
	struct FEdgeID MakeEdgeID(int32_t EdgeIndex); // Function EditableMesh.EditableMesh.MakeEdgeID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xadc7c0
	bool IsValidVertex(struct FVertexID VertexID); // Function EditableMesh.EditableMesh.IsValidVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadc730
	bool IsValidPolygonGroup(struct FPolygonGroupID PolygonGroupID); // Function EditableMesh.EditableMesh.IsValidPolygonGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadc6a0
	bool IsValidPolygon(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.IsValidPolygon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadc610
	bool IsValidEdge(struct FEdgeID EdgeID); // Function EditableMesh.EditableMesh.IsValidEdge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadc580
	bool IsUndoAllowed(); // Function EditableMesh.EditableMesh.IsUndoAllowed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadc560
	bool IsSpatialDatabaseAllowed(); // Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadc540
	bool IsPreviewingSubdivisions(); // Function EditableMesh.EditableMesh.IsPreviewingSubdivisions // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadc510
	bool IsOrphanedVertex(struct FVertexID VertexID); // Function EditableMesh.EditableMesh.IsOrphanedVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadc480
	bool IsCompactAllowed(); // Function EditableMesh.EditableMesh.IsCompactAllowed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadc460
	bool IsCommittedAsInstance(); // Function EditableMesh.EditableMesh.IsCommittedAsInstance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadc430
	bool IsCommitted(); // Function EditableMesh.EditableMesh.IsCommitted // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadc400
	bool IsBeingModified(); // Function EditableMesh.EditableMesh.IsBeingModified // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadc3d0
	struct FVertexID InvalidVertexID(); // Function EditableMesh.EditableMesh.InvalidVertexID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xadc3b0
	struct FPolygonID InvalidPolygonID(); // Function EditableMesh.EditableMesh.InvalidPolygonID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xadc390
	struct FPolygonGroupID InvalidPolygonGroupID(); // Function EditableMesh.EditableMesh.InvalidPolygonGroupID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xadc370
	struct FEdgeID InvalidEdgeID(); // Function EditableMesh.EditableMesh.InvalidEdgeID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xadc350
	void InsetPolygons(struct TArray<struct FPolygonID> PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, enum class EInsetPolygonsMode Mode, struct TArray<struct FPolygonID> OutNewCenterPolygonIDs, struct TArray<struct FPolygonID> OutNewSidePolygonIDs); // Function EditableMesh.EditableMesh.InsetPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xadc110
	void InsertEdgeLoop(struct FEdgeID EdgeID, struct TArray<float> Splits, struct TArray<struct FEdgeID> OutNewEdgeIDs); // Function EditableMesh.EditableMesh.InsertEdgeLoop // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xadbfb0
	void InitializeAdapters(); // Function EditableMesh.EditableMesh.InitializeAdapters // (Final|Native|Public|BlueprintCallable) // @ game+0xadbf90
	struct FEdgeID GetVertexPairEdge(struct FVertexID VertexID, struct FVertexID NextVertexID, bool bOutEdgeWindingIsReversed); // Function EditableMesh.EditableMesh.GetVertexPairEdge // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xadbe60
	struct FVertexID GetVertexInstanceVertex(struct FVertexInstanceID VertexInstanceID); // Function EditableMesh.EditableMesh.GetVertexInstanceVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadbdc0
	int32_t GetVertexInstanceCount(); // Function EditableMesh.EditableMesh.GetVertexInstanceCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadbd90
	void GetVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FPolygonID> OutConnectedPolygonIDs); // Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xadbca0
	int32_t GetVertexInstanceConnectedPolygonCount(struct FVertexInstanceID VertexInstanceID); // Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadbc10
	struct FPolygonID GetVertexInstanceConnectedPolygon(struct FVertexInstanceID VertexInstanceID, int32_t ConnectedPolygonNumber); // Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadbb30
	int32_t GetVertexCount(); // Function EditableMesh.EditableMesh.GetVertexCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadbb00
	void GetVertexConnectedPolygons(struct FVertexID VertexID, struct TArray<struct FPolygonID> OutConnectedPolygonIDs); // Function EditableMesh.EditableMesh.GetVertexConnectedPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xadba10
	void GetVertexConnectedEdges(struct FVertexID VertexID, struct TArray<struct FEdgeID> OutConnectedEdgeIDs); // Function EditableMesh.EditableMesh.GetVertexConnectedEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xadb920
	int32_t GetVertexConnectedEdgeCount(struct FVertexID VertexID); // Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadb890
	struct FEdgeID GetVertexConnectedEdge(struct FVertexID VertexID, int32_t ConnectedEdgeNumber); // Function EditableMesh.EditableMesh.GetVertexConnectedEdge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadb7b0
	void GetVertexAdjacentVertices(struct FVertexID VertexID, struct TArray<struct FVertexID> OutAdjacentVertexIDs); // Function EditableMesh.EditableMesh.GetVertexAdjacentVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xadb6c0
	int32_t GetTextureCoordinateCount(); // Function EditableMesh.EditableMesh.GetTextureCoordinateCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadb690
	struct FSubdivisionLimitData GetSubdivisionLimitData(); // Function EditableMesh.EditableMesh.GetSubdivisionLimitData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadb650
	int32_t GetSubdivisionCount(); // Function EditableMesh.EditableMesh.GetSubdivisionCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadb620
	int32_t GetPolygonTriangulatedTriangleCount(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadb590
	struct FTriangleID GetPolygonTriangulatedTriangle(struct FPolygonID PolygonID, int32_t PolygonTriangleNumber); // Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadb4b0
	void GetPolygonPerimeterVertices(struct FPolygonID PolygonID, struct TArray<struct FVertexID> OutPolygonPerimeterVertexIDs); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xadb3c0
	void GetPolygonPerimeterVertexInstances(struct FPolygonID PolygonID, struct TArray<struct FVertexInstanceID> OutPolygonPerimeterVertexInstanceIDs); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xadb2d0
	struct FVertexInstanceID GetPolygonPerimeterVertexInstance(struct FPolygonID PolygonID, int32_t PolygonVertexNumber); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadb1f0
	int32_t GetPolygonPerimeterVertexCount(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadaf90
	struct FVertexID GetPolygonPerimeterVertex(struct FPolygonID PolygonID, int32_t PolygonVertexNumber); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadb110
	void GetPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID> OutPolygonPerimeterEdgeIDs); // Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xadb020
	int32_t GetPolygonPerimeterEdgeCount(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadaf90
	struct FEdgeID GetPolygonPerimeterEdge(struct FPolygonID PolygonID, int32_t PerimeterEdgeNumber, bool bOutEdgeWindingIsReversedForPolygon); // Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xadae60
	struct FPolygonID GetPolygonInGroup(struct FPolygonGroupID PolygonGroupID, int32_t PolygonNumber); // Function EditableMesh.EditableMesh.GetPolygonInGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadad80
	int32_t GetPolygonGroupCount(); // Function EditableMesh.EditableMesh.GetPolygonGroupCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadad50
	int32_t GetPolygonCountInGroup(struct FPolygonGroupID PolygonGroupID); // Function EditableMesh.EditableMesh.GetPolygonCountInGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadacc0
	int32_t GetPolygonCount(); // Function EditableMesh.EditableMesh.GetPolygonCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadac90
	void GetPolygonAdjacentPolygons(struct FPolygonID PolygonID, struct TArray<struct FPolygonID> OutAdjacentPolygons); // Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xadaba0
	struct FPolygonGroupID GetGroupForPolygon(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.GetGroupForPolygon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadab00
	struct FPolygonGroupID GetFirstValidPolygonGroup(); // Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadaac0
	void GetEdgeVertices(struct FEdgeID EdgeID, struct FVertexID OutEdgeVertexID0, struct FVertexID OutEdgeVertexID1); // Function EditableMesh.EditableMesh.GetEdgeVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xada990
	struct FVertexID GetEdgeVertex(struct FEdgeID EdgeID, int32_t EdgeVertexNumber); // Function EditableMesh.EditableMesh.GetEdgeVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xada8b0
	struct FEdgeID GetEdgeThatConnectsVertices(struct FVertexID VertexID0, struct FVertexID VertexID1); // Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xada7d0
	void GetEdgeLoopElements(struct FEdgeID EdgeID, struct TArray<struct FEdgeID> EdgeLoopIDs); // Function EditableMesh.EditableMesh.GetEdgeLoopElements // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xada6e0
	int32_t GetEdgeCount(); // Function EditableMesh.EditableMesh.GetEdgeCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xada6b0
	void GetEdgeConnectedPolygons(struct FEdgeID EdgeID, struct TArray<struct FPolygonID> OutConnectedPolygonIDs); // Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xada5c0
	int32_t GetEdgeConnectedPolygonCount(struct FEdgeID EdgeID); // Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xada530
	struct FPolygonID GetEdgeConnectedPolygon(struct FEdgeID EdgeID, int32_t ConnectedPolygonNumber); // Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xada450
	void GeneratePolygonTangentsAndNormals(struct TArray<struct FPolygonID> PolygonIDs); // Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xada3a0
	void FlipPolygons(struct TArray<struct FPolygonID> PolygonIDs); // Function EditableMesh.EditableMesh.FlipPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xada2f0
	int32_t FindPolygonPerimeterVertexNumberForVertex(struct FPolygonID PolygonID, struct FVertexID VertexID); // Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xada210
	int32_t FindPolygonPerimeterEdgeNumberForVertices(struct FPolygonID PolygonID, struct FVertexID EdgeVertexID0, struct FVertexID EdgeVertexID1); // Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xada0f0
	void FindPolygonLoop(struct FEdgeID EdgeID, struct TArray<struct FEdgeID> OutEdgeLoopEdgeIDs, struct TArray<struct FEdgeID> OutFlippedEdgeIDs, struct TArray<struct FEdgeID> OutReversedEdgeIDPathToTake, struct TArray<struct FPolygonID> OutPolygonIDsToSplit); // Function EditableMesh.EditableMesh.FindPolygonLoop // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xad9ed0
	void ExtrudePolygons(struct TArray<struct FPolygonID> Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, struct TArray<struct FPolygonID> OutNewExtrudedFrontPolygons); // Function EditableMesh.EditableMesh.ExtrudePolygons // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad9d10
	void ExtendVertices(struct TArray<struct FVertexID> VertexIDs, bool bOnlyExtendClosestEdge, struct FVector ReferencePosition, struct TArray<struct FVertexID> OutNewExtendedVertexIDs); // Function EditableMesh.EditableMesh.ExtendVertices // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xad9b60
	void ExtendEdges(struct TArray<struct FEdgeID> EdgeIDs, bool bWeldNeighbors, struct TArray<struct FEdgeID> OutNewExtendedEdgeIDs); // Function EditableMesh.EditableMesh.ExtendEdges // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad9a00
	void EndModification(bool bFromUndo); // Function EditableMesh.EditableMesh.EndModification // (Final|Native|Public|BlueprintCallable) // @ game+0xad9970
	void DeleteVertexInstances(struct TArray<struct FVertexInstanceID> VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices); // Function EditableMesh.EditableMesh.DeleteVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad9870
	void DeleteVertexAndConnectedEdgesAndPolygons(struct FVertexID VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons // (Final|Native|Public|BlueprintCallable) // @ game+0xad96a0
	void DeletePolygons(struct TArray<struct FPolygonID> PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // Function EditableMesh.EditableMesh.DeletePolygons // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad94a0
	void DeletePolygonGroups(struct TArray<struct FPolygonGroupID> PolygonGroupIDs); // Function EditableMesh.EditableMesh.DeletePolygonGroups // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad93f0
	void DeleteOrphanVertices(struct TArray<struct FVertexID> VertexIDsToDelete); // Function EditableMesh.EditableMesh.DeleteOrphanVertices // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad9340
	void DeleteEdges(struct TArray<struct FEdgeID> EdgeIDsToDelete, bool bDeleteOrphanedVertices); // Function EditableMesh.EditableMesh.DeleteEdges // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad9240
	void DeleteEdgeAndConnectedPolygons(struct FEdgeID EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons // (Final|Native|Public|BlueprintCallable) // @ game+0xad9070
	void CreateVertices(struct TArray<struct FVertexToCreate> VerticesToCreate, struct TArray<struct FVertexID> OutNewVertexIDs); // Function EditableMesh.EditableMesh.CreateVertices // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad8f30
	void CreateVertexInstances(struct TArray<struct FVertexInstanceToCreate> VertexInstancesToCreate, struct TArray<struct FVertexInstanceID> OutNewVertexInstanceIDs); // Function EditableMesh.EditableMesh.CreateVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad8df0
	void CreatePolygons(struct TArray<struct FPolygonToCreate> PolygonsToCreate, struct TArray<struct FPolygonID> OutNewPolygonIDs, struct TArray<struct FEdgeID> OutNewEdgeIDs); // Function EditableMesh.EditableMesh.CreatePolygons // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad8c20
	void CreatePolygonGroups(struct TArray<struct FPolygonGroupToCreate> PolygonGroupsToCreate, struct TArray<struct FPolygonGroupID> OutNewPolygonGroupIDs); // Function EditableMesh.EditableMesh.CreatePolygonGroups // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad8ae0
	void CreateMissingPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID> OutNewEdgeIDs); // Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad89f0
	void CreateEmptyVertexRange(int32_t NumVerticesToCreate, struct TArray<struct FVertexID> OutNewVertexIDs); // Function EditableMesh.EditableMesh.CreateEmptyVertexRange // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad8900
	void CreateEdges(struct TArray<struct FEdgeToCreate> EdgesToCreate, struct TArray<struct FEdgeID> OutNewEdgeIDs); // Function EditableMesh.EditableMesh.CreateEdges // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad87c0
	void ComputePolygonsSharedEdges(struct TArray<struct FPolygonID> PolygonIDs, struct TArray<struct FEdgeID> OutSharedEdgeIDs); // Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xad86a0
	struct FPlane ComputePolygonPlane(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.ComputePolygonPlane // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xad8600
	struct FVector ComputePolygonNormal(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.ComputePolygonNormal // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xad8560
	struct FVector ComputePolygonCenter(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.ComputePolygonCenter // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xad84c0
	struct FBoxSphereBounds ComputeBoundingBoxAndSphere(); // Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xad8470
	struct FBox ComputeBoundingBox(); // Function EditableMesh.EditableMesh.ComputeBoundingBox // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xad8420
	struct UEditableMesh* CommitInstance(struct UPrimitiveComponent* ComponentToInstanceTo); // Function EditableMesh.EditableMesh.CommitInstance // (Final|Native|Public|BlueprintCallable) // @ game+0xad8380
	void Commit(); // Function EditableMesh.EditableMesh.Commit // (Final|Native|Public|BlueprintCallable) // @ game+0xad8360
	void ChangePolygonsVertexInstances(struct TArray<struct FChangeVertexInstancesForPolygon> VertexInstancesForPolygons); // Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad8240
	void BevelPolygons(struct TArray<struct FPolygonID> PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, struct TArray<struct FPolygonID> OutNewCenterPolygonIDs, struct TArray<struct FPolygonID> OutNewSidePolygonIDs); // Function EditableMesh.EditableMesh.BevelPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad8050
	void AssignPolygonsToPolygonGroups(struct TArray<struct FPolygonGroupForPolygon> PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups); // Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad7f50
	bool AnyChangesToUndo(); // Function EditableMesh.EditableMesh.AnyChangesToUndo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xad7f20
};

// Class EditableMesh.EditableMeshFactory
// Size: 0x28 (Inherited: 0x28)
struct UEditableMeshFactory : UObject {

	struct UEditableMesh* MakeEditableMesh(struct UPrimitiveComponent* PrimitiveComponent, int32_t LODIndex); // Function EditableMesh.EditableMeshFactory.MakeEditableMesh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xae1730
};

// Class EditableMesh.EditableStaticMeshAdapter
// Size: 0xe0 (Inherited: 0x28)
struct UEditableStaticMeshAdapter : UEditableMeshAdapter {
	struct UStaticMesh* StaticMesh; // 0x28(0x08)
	struct UStaticMesh* OriginalStaticMesh; // 0x30(0x08)
	int32_t StaticMeshLODIndex; // 0x38(0x04)
	char pad_3C[0xa4]; // 0x3c(0xa4)
};


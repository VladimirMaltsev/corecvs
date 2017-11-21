#ifndef CHESS_BOARD_ASSEMBLER_PARAMS_BASE_H_
#define CHESS_BOARD_ASSEMBLER_PARAMS_BASE_H_
/**
 * \file chessBoardAssemblerParamsBase.h
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 */

#include "core/reflection/reflection.h"
#include "core/reflection/defaultSetter.h"
#include "core/reflection/printerVisitor.h"

/*
 *  Embed includes.
 */
/*
 *  Additional includes for Composite Types.
 */

// using namespace corecvs;

/*
 *  Additional includes for Pointer Types.
 */

// namespace corecvs {
// }
/*
 *  Additional includes for enum section.
 */

/**
 * \brief Chess Board Assembler Params Base 
 * Chess Board Assembler Params Base 
 **/
class ChessBoardAssemblerParamsBase : public corecvs::BaseReflection<ChessBoardAssemblerParamsBase>
{
public:
    enum FieldId {
        SEEDTHRESHOLD_ID,
        SEEDTGPENALTY_ID,
        CONSERVATIVITY_ID,
        COSTTHRESHOLD_ID,
        MINSEEDDISTANCE_ID,
        HYPOTHESISDIMENSIONS_ID,
        KDTREE_ID,
        HYPOTHESISDIMFIRST_ID,
        HYPOTHESISDIMSECOND_ID,
        CHESS_BOARD_ASSEMBLER_PARAMS_BASE_FIELD_ID_NUM
    };

    /** Section with variables */

    /** 
     * \brief seedThreshold 
     * Threshold for seed grid non-regularity 
     */
    double mSeedThreshold;

    /** 
     * \brief seedTgPenalty 
     * Factor for orthogonal error in seed estimation 
     */
    double mSeedTgPenalty;

    /** 
     * \brief conservativity 
     * Factor of conservativity in next row prediction (should be lower to high-distorted boards) 
     */
    double mConservativity;

    /** 
     * \brief costThreshold 
     *  Maximal cost for real board 
     */
    double mCostThreshold;

    /** 
     * \brief minSeedDistance 
     * Minimal seed distance 
     */
    double mMinSeedDistance;

    /** 
     * \brief hypothesisDimensions 
     * Hypothesis type: consider only hypothesis that fits specified number of dims 
     */
    int mHypothesisDimensions;

    /** 
     * \brief kdtree 
     * Use k-d tree for greedy expansion 
     */
    bool mKdtree;

    /** 
     * \brief hypothesisDimFirst 
     * hypothesisDimFirst 
     */
    int mHypothesisDimFirst;

    /** 
     * \brief hypothesisDimSecond 
     * hypothesisDimSecond 
     */
    int mHypothesisDimSecond;

    /** Static fields init function, this is used for "dynamic" field initialization */ 
    static int staticInit();

    static int relinkCompositeFields();

    /** Section with getters */
    const void *getPtrById(int fieldId) const
    {
        return (const unsigned char *)(this) + fields()[fieldId]->offset;
    }
    double seedThreshold() const
    {
        return mSeedThreshold;
    }

    double seedTgPenalty() const
    {
        return mSeedTgPenalty;
    }

    double conservativity() const
    {
        return mConservativity;
    }

    double costThreshold() const
    {
        return mCostThreshold;
    }

    double minSeedDistance() const
    {
        return mMinSeedDistance;
    }

    int hypothesisDimensions() const
    {
        return mHypothesisDimensions;
    }

    bool kdtree() const
    {
        return mKdtree;
    }

    int hypothesisDimFirst() const
    {
        return mHypothesisDimFirst;
    }

    int hypothesisDimSecond() const
    {
        return mHypothesisDimSecond;
    }

    /* Section with setters */
    void setSeedThreshold(double seedThreshold)
    {
        mSeedThreshold = seedThreshold;
    }

    void setSeedTgPenalty(double seedTgPenalty)
    {
        mSeedTgPenalty = seedTgPenalty;
    }

    void setConservativity(double conservativity)
    {
        mConservativity = conservativity;
    }

    void setCostThreshold(double costThreshold)
    {
        mCostThreshold = costThreshold;
    }

    void setMinSeedDistance(double minSeedDistance)
    {
        mMinSeedDistance = minSeedDistance;
    }

    void setHypothesisDimensions(int hypothesisDimensions)
    {
        mHypothesisDimensions = hypothesisDimensions;
    }

    void setKdtree(bool kdtree)
    {
        mKdtree = kdtree;
    }

    void setHypothesisDimFirst(int hypothesisDimFirst)
    {
        mHypothesisDimFirst = hypothesisDimFirst;
    }

    void setHypothesisDimSecond(int hypothesisDimSecond)
    {
        mHypothesisDimSecond = hypothesisDimSecond;
    }

    /* Section with embedded classes */
    /* visitor pattern - http://en.wikipedia.org/wiki/Visitor_pattern */
template<class VisitorType>
    void accept(VisitorType &visitor)
    {
        visitor.visit(mSeedThreshold,             static_cast<const corecvs::DoubleField *>(fields()[SEEDTHRESHOLD_ID]));
        visitor.visit(mSeedTgPenalty,             static_cast<const corecvs::DoubleField *>(fields()[SEEDTGPENALTY_ID]));
        visitor.visit(mConservativity,            static_cast<const corecvs::DoubleField *>(fields()[CONSERVATIVITY_ID]));
        visitor.visit(mCostThreshold,             static_cast<const corecvs::DoubleField *>(fields()[COSTTHRESHOLD_ID]));
        visitor.visit(mMinSeedDistance,           static_cast<const corecvs::DoubleField *>(fields()[MINSEEDDISTANCE_ID]));
        visitor.visit(mHypothesisDimensions,      static_cast<const corecvs::IntField *>(fields()[HYPOTHESISDIMENSIONS_ID]));
        visitor.visit(mKdtree,                    static_cast<const corecvs::BoolField *>(fields()[KDTREE_ID]));
        visitor.visit(mHypothesisDimFirst,        static_cast<const corecvs::IntField *>(fields()[HYPOTHESISDIMFIRST_ID]));
        visitor.visit(mHypothesisDimSecond,       static_cast<const corecvs::IntField *>(fields()[HYPOTHESISDIMSECOND_ID]));
    }

    ChessBoardAssemblerParamsBase()
    {
        corecvs::DefaultSetter setter;
        accept(setter);
    }

    ChessBoardAssemblerParamsBase(
          double seedThreshold
        , double seedTgPenalty
        , double conservativity
        , double costThreshold
        , double minSeedDistance
        , int hypothesisDimensions
        , bool kdtree
        , int hypothesisDimFirst
        , int hypothesisDimSecond
    )
    {
        mSeedThreshold = seedThreshold;
        mSeedTgPenalty = seedTgPenalty;
        mConservativity = conservativity;
        mCostThreshold = costThreshold;
        mMinSeedDistance = minSeedDistance;
        mHypothesisDimensions = hypothesisDimensions;
        mKdtree = kdtree;
        mHypothesisDimFirst = hypothesisDimFirst;
        mHypothesisDimSecond = hypothesisDimSecond;
    }

    friend std::ostream& operator << (std::ostream &out, ChessBoardAssemblerParamsBase &toSave)
    {
        corecvs::PrinterVisitor printer(out);
        toSave.accept<corecvs::PrinterVisitor>(printer);
        return out;
    }

    void print ()
    {
        std::cout << *this;
    }
};
#endif  //CHESS_BOARD_ASSEMBLER_PARAMS_BASE_H_